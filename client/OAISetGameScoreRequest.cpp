/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAISetGameScoreRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISetGameScoreRequest::OAISetGameScoreRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISetGameScoreRequest::OAISetGameScoreRequest() {
    this->initializeModel();
}

OAISetGameScoreRequest::~OAISetGameScoreRequest() {}

void OAISetGameScoreRequest::initializeModel() {

    m_user_id_isSet = false;
    m_user_id_isValid = false;

    m_score_isSet = false;
    m_score_isValid = false;

    m_force_isSet = false;
    m_force_isValid = false;

    m_disable_edit_message_isSet = false;
    m_disable_edit_message_isValid = false;

    m_chat_id_isSet = false;
    m_chat_id_isValid = false;

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_inline_message_id_isSet = false;
    m_inline_message_id_isValid = false;
}

void OAISetGameScoreRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISetGameScoreRequest::fromJsonObject(QJsonObject json) {

    m_user_id_isValid = ::tele_rest::fromJsonValue(m_user_id, json[QString("user_id")]);
    m_user_id_isSet = !json[QString("user_id")].isNull() && m_user_id_isValid;

    m_score_isValid = ::tele_rest::fromJsonValue(m_score, json[QString("score")]);
    m_score_isSet = !json[QString("score")].isNull() && m_score_isValid;

    m_force_isValid = ::tele_rest::fromJsonValue(m_force, json[QString("force")]);
    m_force_isSet = !json[QString("force")].isNull() && m_force_isValid;

    m_disable_edit_message_isValid = ::tele_rest::fromJsonValue(m_disable_edit_message, json[QString("disable_edit_message")]);
    m_disable_edit_message_isSet = !json[QString("disable_edit_message")].isNull() && m_disable_edit_message_isValid;

    m_chat_id_isValid = ::tele_rest::fromJsonValue(m_chat_id, json[QString("chat_id")]);
    m_chat_id_isSet = !json[QString("chat_id")].isNull() && m_chat_id_isValid;

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_inline_message_id_isValid = ::tele_rest::fromJsonValue(m_inline_message_id, json[QString("inline_message_id")]);
    m_inline_message_id_isSet = !json[QString("inline_message_id")].isNull() && m_inline_message_id_isValid;
}

QString OAISetGameScoreRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISetGameScoreRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_user_id_isSet) {
        obj.insert(QString("user_id"), ::tele_rest::toJsonValue(m_user_id));
    }
    if (m_score_isSet) {
        obj.insert(QString("score"), ::tele_rest::toJsonValue(m_score));
    }
    if (m_force_isSet) {
        obj.insert(QString("force"), ::tele_rest::toJsonValue(m_force));
    }
    if (m_disable_edit_message_isSet) {
        obj.insert(QString("disable_edit_message"), ::tele_rest::toJsonValue(m_disable_edit_message));
    }
    if (m_chat_id_isSet) {
        obj.insert(QString("chat_id"), ::tele_rest::toJsonValue(m_chat_id));
    }
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_inline_message_id_isSet) {
        obj.insert(QString("inline_message_id"), ::tele_rest::toJsonValue(m_inline_message_id));
    }
    return obj;
}

qint32 OAISetGameScoreRequest::getUserId() const {
    return m_user_id;
}
void OAISetGameScoreRequest::setUserId(const qint32 &user_id) {
    m_user_id = user_id;
    m_user_id_isSet = true;
}

bool OAISetGameScoreRequest::is_user_id_Set() const{
    return m_user_id_isSet;
}

bool OAISetGameScoreRequest::is_user_id_Valid() const{
    return m_user_id_isValid;
}

qint32 OAISetGameScoreRequest::getScore() const {
    return m_score;
}
void OAISetGameScoreRequest::setScore(const qint32 &score) {
    m_score = score;
    m_score_isSet = true;
}

bool OAISetGameScoreRequest::is_score_Set() const{
    return m_score_isSet;
}

bool OAISetGameScoreRequest::is_score_Valid() const{
    return m_score_isValid;
}

bool OAISetGameScoreRequest::isForce() const {
    return m_force;
}
void OAISetGameScoreRequest::setForce(const bool &force) {
    m_force = force;
    m_force_isSet = true;
}

bool OAISetGameScoreRequest::is_force_Set() const{
    return m_force_isSet;
}

bool OAISetGameScoreRequest::is_force_Valid() const{
    return m_force_isValid;
}

bool OAISetGameScoreRequest::isDisableEditMessage() const {
    return m_disable_edit_message;
}
void OAISetGameScoreRequest::setDisableEditMessage(const bool &disable_edit_message) {
    m_disable_edit_message = disable_edit_message;
    m_disable_edit_message_isSet = true;
}

bool OAISetGameScoreRequest::is_disable_edit_message_Set() const{
    return m_disable_edit_message_isSet;
}

bool OAISetGameScoreRequest::is_disable_edit_message_Valid() const{
    return m_disable_edit_message_isValid;
}

qint32 OAISetGameScoreRequest::getChatId() const {
    return m_chat_id;
}
void OAISetGameScoreRequest::setChatId(const qint32 &chat_id) {
    m_chat_id = chat_id;
    m_chat_id_isSet = true;
}

bool OAISetGameScoreRequest::is_chat_id_Set() const{
    return m_chat_id_isSet;
}

bool OAISetGameScoreRequest::is_chat_id_Valid() const{
    return m_chat_id_isValid;
}

qint32 OAISetGameScoreRequest::getMessageId() const {
    return m_message_id;
}
void OAISetGameScoreRequest::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAISetGameScoreRequest::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAISetGameScoreRequest::is_message_id_Valid() const{
    return m_message_id_isValid;
}

QString OAISetGameScoreRequest::getInlineMessageId() const {
    return m_inline_message_id;
}
void OAISetGameScoreRequest::setInlineMessageId(const QString &inline_message_id) {
    m_inline_message_id = inline_message_id;
    m_inline_message_id_isSet = true;
}

bool OAISetGameScoreRequest::is_inline_message_id_Set() const{
    return m_inline_message_id_isSet;
}

bool OAISetGameScoreRequest::is_inline_message_id_Valid() const{
    return m_inline_message_id_isValid;
}

bool OAISetGameScoreRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_score_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_force_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_disable_edit_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_inline_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISetGameScoreRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_id_isValid && m_score_isValid && true;
}

} // namespace tele_rest
