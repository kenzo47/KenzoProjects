from flask import Blueprint, render_template, jsonify
from flask.globals import request
from flask.helpers import flash
from flask.json import jsonify
from flask_login import login_required, current_user
from sqlalchemy.sql.functions import user
from .models import Note, Order
from . import db
import json

views = Blueprint('views', __name__)

@views.route('/', methods=['GET'])
def home():
    return render_template('home.html', user=current_user)

@views.route('/notes', methods=['GET', 'POST'])
@login_required
def notes():
    if request.method == 'POST':
        note = request.form.get('note')
        
        if len(note) < 1:
            flash('Note must contain text!', category='error')
        else:
            new_note = Note(data=note, user_id=current_user.id)
            db.session.add(new_note)
            db.session.commit()
            flash('Note added successfully.', category='success')
    return render_template('notes.html', user=current_user)

@views.route('/orders', methods=['GET', 'POST'])
@login_required
def orders():
    if request.method == 'POST':
        order = request.form.get('order')
         
        if len(order) < 1:
            flash('Order must contain text', category='error')
        else:
            new_order = Order(data=order, user_id=current_user.id)
            db.session.add(new_order)
            db.session.commit()
            flash('Order added successfully.', category='success')
    return render_template('orders.html', user=current_user)

@views.route('/delete-note', methods=['POST'])
def delete_note():
    note = json.loads(request.data)
    noteId = note['noteId']
    note = Note.query.get(noteId)
    if note:
        if note.user_id == current_user.id:
            db.session.delete(note)
            db.session.commit()
            
    return jsonify({})