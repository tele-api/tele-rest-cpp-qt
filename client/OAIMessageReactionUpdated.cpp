/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIMessageReactionUpdated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIMessageReactionUpdated::OAIMessageReactionUpdated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageReactionUpdated::OAIMessageReactionUpdated() {
    this->initializeModel();
}

OAIMessageReactionUpdated::~OAIMessageReactionUpdated() {}

void OAIMessageReactionUpdated::initializeModel() {

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_old_reaction_isSet = false;
    m_old_reaction_isValid = false;

    m_new_reaction_isSet = false;
    m_new_reaction_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_actor_chat_isSet = false;
    m_actor_chat_isValid = false;
}

void OAIMessageReactionUpdated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageReactionUpdated::fromJsonObject(QJsonObject json) {

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_old_reaction_isValid = ::tele_rest::fromJsonValue(m_old_reaction, json[QString("old_reaction")]);
    m_old_reaction_isSet = !json[QString("old_reaction")].isNull() && m_old_reaction_isValid;

    m_new_reaction_isValid = ::tele_rest::fromJsonValue(m_new_reaction, json[QString("new_reaction")]);
    m_new_reaction_isSet = !json[QString("new_reaction")].isNull() && m_new_reaction_isValid;

    m_user_isValid = ::tele_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_actor_chat_isValid = ::tele_rest::fromJsonValue(m_actor_chat, json[QString("actor_chat")]);
    m_actor_chat_isSet = !json[QString("actor_chat")].isNull() && m_actor_chat_isValid;
}

QString OAIMessageReactionUpdated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageReactionUpdated::asJsonObject() const {
    QJsonObject obj;
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_old_reaction.size() > 0) {
        obj.insert(QString("old_reaction"), ::tele_rest::toJsonValue(m_old_reaction));
    }
    if (m_new_reaction.size() > 0) {
        obj.insert(QString("new_reaction"), ::tele_rest::toJsonValue(m_new_reaction));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::tele_rest::toJsonValue(m_user));
    }
    if (m_actor_chat.isSet()) {
        obj.insert(QString("actor_chat"), ::tele_rest::toJsonValue(m_actor_chat));
    }
    return obj;
}

OAIChat OAIMessageReactionUpdated::getChat() const {
    return m_chat;
}
void OAIMessageReactionUpdated::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAIMessageReactionUpdated::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAIMessageReactionUpdated::is_chat_Valid() const{
    return m_chat_isValid;
}

qint32 OAIMessageReactionUpdated::getMessageId() const {
    return m_message_id;
}
void OAIMessageReactionUpdated::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAIMessageReactionUpdated::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAIMessageReactionUpdated::is_message_id_Valid() const{
    return m_message_id_isValid;
}

qint32 OAIMessageReactionUpdated::getDate() const {
    return m_date;
}
void OAIMessageReactionUpdated::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAIMessageReactionUpdated::is_date_Set() const{
    return m_date_isSet;
}

bool OAIMessageReactionUpdated::is_date_Valid() const{
    return m_date_isValid;
}

QList<OAIReactionType> OAIMessageReactionUpdated::getOldReaction() const {
    return m_old_reaction;
}
void OAIMessageReactionUpdated::setOldReaction(const QList<OAIReactionType> &old_reaction) {
    m_old_reaction = old_reaction;
    m_old_reaction_isSet = true;
}

bool OAIMessageReactionUpdated::is_old_reaction_Set() const{
    return m_old_reaction_isSet;
}

bool OAIMessageReactionUpdated::is_old_reaction_Valid() const{
    return m_old_reaction_isValid;
}

QList<OAIReactionType> OAIMessageReactionUpdated::getNewReaction() const {
    return m_new_reaction;
}
void OAIMessageReactionUpdated::setNewReaction(const QList<OAIReactionType> &new_reaction) {
    m_new_reaction = new_reaction;
    m_new_reaction_isSet = true;
}

bool OAIMessageReactionUpdated::is_new_reaction_Set() const{
    return m_new_reaction_isSet;
}

bool OAIMessageReactionUpdated::is_new_reaction_Valid() const{
    return m_new_reaction_isValid;
}

OAIUser OAIMessageReactionUpdated::getUser() const {
    return m_user;
}
void OAIMessageReactionUpdated::setUser(const OAIUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIMessageReactionUpdated::is_user_Set() const{
    return m_user_isSet;
}

bool OAIMessageReactionUpdated::is_user_Valid() const{
    return m_user_isValid;
}

OAIChat OAIMessageReactionUpdated::getActorChat() const {
    return m_actor_chat;
}
void OAIMessageReactionUpdated::setActorChat(const OAIChat &actor_chat) {
    m_actor_chat = actor_chat;
    m_actor_chat_isSet = true;
}

bool OAIMessageReactionUpdated::is_actor_chat_Set() const{
    return m_actor_chat_isSet;
}

bool OAIMessageReactionUpdated::is_actor_chat_Valid() const{
    return m_actor_chat_isValid;
}

bool OAIMessageReactionUpdated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_old_reaction.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_reaction.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_actor_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageReactionUpdated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chat_isValid && m_message_id_isValid && m_date_isValid && m_old_reaction_isValid && m_new_reaction_isValid && true;
}

} // namespace tele_rest
