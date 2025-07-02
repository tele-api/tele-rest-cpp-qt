/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIPost_answerPreCheckoutQuery_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_answerPreCheckoutQuery_request::OAIPost_answerPreCheckoutQuery_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_answerPreCheckoutQuery_request::OAIPost_answerPreCheckoutQuery_request() {
    this->initializeModel();
}

OAIPost_answerPreCheckoutQuery_request::~OAIPost_answerPreCheckoutQuery_request() {}

void OAIPost_answerPreCheckoutQuery_request::initializeModel() {

    m_pre_checkout_query_id_isSet = false;
    m_pre_checkout_query_id_isValid = false;

    m_ok_isSet = false;
    m_ok_isValid = false;

    m_error_message_isSet = false;
    m_error_message_isValid = false;
}

void OAIPost_answerPreCheckoutQuery_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_answerPreCheckoutQuery_request::fromJsonObject(QJsonObject json) {

    m_pre_checkout_query_id_isValid = ::tele_rest::fromJsonValue(m_pre_checkout_query_id, json[QString("pre_checkout_query_id")]);
    m_pre_checkout_query_id_isSet = !json[QString("pre_checkout_query_id")].isNull() && m_pre_checkout_query_id_isValid;

    m_ok_isValid = ::tele_rest::fromJsonValue(m_ok, json[QString("ok")]);
    m_ok_isSet = !json[QString("ok")].isNull() && m_ok_isValid;

    m_error_message_isValid = ::tele_rest::fromJsonValue(m_error_message, json[QString("error_message")]);
    m_error_message_isSet = !json[QString("error_message")].isNull() && m_error_message_isValid;
}

QString OAIPost_answerPreCheckoutQuery_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_answerPreCheckoutQuery_request::asJsonObject() const {
    QJsonObject obj;
    if (m_pre_checkout_query_id_isSet) {
        obj.insert(QString("pre_checkout_query_id"), ::tele_rest::toJsonValue(m_pre_checkout_query_id));
    }
    if (m_ok_isSet) {
        obj.insert(QString("ok"), ::tele_rest::toJsonValue(m_ok));
    }
    if (m_error_message_isSet) {
        obj.insert(QString("error_message"), ::tele_rest::toJsonValue(m_error_message));
    }
    return obj;
}

QString OAIPost_answerPreCheckoutQuery_request::getPreCheckoutQueryId() const {
    return m_pre_checkout_query_id;
}
void OAIPost_answerPreCheckoutQuery_request::setPreCheckoutQueryId(const QString &pre_checkout_query_id) {
    m_pre_checkout_query_id = pre_checkout_query_id;
    m_pre_checkout_query_id_isSet = true;
}

bool OAIPost_answerPreCheckoutQuery_request::is_pre_checkout_query_id_Set() const{
    return m_pre_checkout_query_id_isSet;
}

bool OAIPost_answerPreCheckoutQuery_request::is_pre_checkout_query_id_Valid() const{
    return m_pre_checkout_query_id_isValid;
}

bool OAIPost_answerPreCheckoutQuery_request::isOk() const {
    return m_ok;
}
void OAIPost_answerPreCheckoutQuery_request::setOk(const bool &ok) {
    m_ok = ok;
    m_ok_isSet = true;
}

bool OAIPost_answerPreCheckoutQuery_request::is_ok_Set() const{
    return m_ok_isSet;
}

bool OAIPost_answerPreCheckoutQuery_request::is_ok_Valid() const{
    return m_ok_isValid;
}

QString OAIPost_answerPreCheckoutQuery_request::getErrorMessage() const {
    return m_error_message;
}
void OAIPost_answerPreCheckoutQuery_request::setErrorMessage(const QString &error_message) {
    m_error_message = error_message;
    m_error_message_isSet = true;
}

bool OAIPost_answerPreCheckoutQuery_request::is_error_message_Set() const{
    return m_error_message_isSet;
}

bool OAIPost_answerPreCheckoutQuery_request::is_error_message_Valid() const{
    return m_error_message_isValid;
}

bool OAIPost_answerPreCheckoutQuery_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pre_checkout_query_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ok_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPost_answerPreCheckoutQuery_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pre_checkout_query_id_isValid && m_ok_isValid && true;
}

} // namespace tele_rest
