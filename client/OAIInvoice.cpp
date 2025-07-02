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

#include "OAIInvoice.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInvoice::OAIInvoice(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInvoice::OAIInvoice() {
    this->initializeModel();
}

OAIInvoice::~OAIInvoice() {}

void OAIInvoice::initializeModel() {

    m_title_isSet = false;
    m_title_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_start_parameter_isSet = false;
    m_start_parameter_isValid = false;

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_total_amount_isSet = false;
    m_total_amount_isValid = false;
}

void OAIInvoice::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInvoice::fromJsonObject(QJsonObject json) {

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_start_parameter_isValid = ::tele_rest::fromJsonValue(m_start_parameter, json[QString("start_parameter")]);
    m_start_parameter_isSet = !json[QString("start_parameter")].isNull() && m_start_parameter_isValid;

    m_currency_isValid = ::tele_rest::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_total_amount_isValid = ::tele_rest::fromJsonValue(m_total_amount, json[QString("total_amount")]);
    m_total_amount_isSet = !json[QString("total_amount")].isNull() && m_total_amount_isValid;
}

QString OAIInvoice::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInvoice::asJsonObject() const {
    QJsonObject obj;
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_start_parameter_isSet) {
        obj.insert(QString("start_parameter"), ::tele_rest::toJsonValue(m_start_parameter));
    }
    if (m_currency_isSet) {
        obj.insert(QString("currency"), ::tele_rest::toJsonValue(m_currency));
    }
    if (m_total_amount_isSet) {
        obj.insert(QString("total_amount"), ::tele_rest::toJsonValue(m_total_amount));
    }
    return obj;
}

QString OAIInvoice::getTitle() const {
    return m_title;
}
void OAIInvoice::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInvoice::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInvoice::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIInvoice::getDescription() const {
    return m_description;
}
void OAIInvoice::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIInvoice::is_description_Set() const{
    return m_description_isSet;
}

bool OAIInvoice::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIInvoice::getStartParameter() const {
    return m_start_parameter;
}
void OAIInvoice::setStartParameter(const QString &start_parameter) {
    m_start_parameter = start_parameter;
    m_start_parameter_isSet = true;
}

bool OAIInvoice::is_start_parameter_Set() const{
    return m_start_parameter_isSet;
}

bool OAIInvoice::is_start_parameter_Valid() const{
    return m_start_parameter_isValid;
}

QString OAIInvoice::getCurrency() const {
    return m_currency;
}
void OAIInvoice::setCurrency(const QString &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAIInvoice::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAIInvoice::is_currency_Valid() const{
    return m_currency_isValid;
}

qint32 OAIInvoice::getTotalAmount() const {
    return m_total_amount;
}
void OAIInvoice::setTotalAmount(const qint32 &total_amount) {
    m_total_amount = total_amount;
    m_total_amount_isSet = true;
}

bool OAIInvoice::is_total_amount_Set() const{
    return m_total_amount_isSet;
}

bool OAIInvoice::is_total_amount_Valid() const{
    return m_total_amount_isValid;
}

bool OAIInvoice::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_parameter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_amount_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInvoice::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_title_isValid && m_description_isValid && m_start_parameter_isValid && m_currency_isValid && m_total_amount_isValid && true;
}

} // namespace tele_rest
