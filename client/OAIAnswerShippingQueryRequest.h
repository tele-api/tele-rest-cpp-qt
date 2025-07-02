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

/*
 * OAIAnswerShippingQueryRequest.h
 *
 * Request parameters for answerShippingQuery
 */

#ifndef OAIAnswerShippingQueryRequest_H
#define OAIAnswerShippingQueryRequest_H

#include <QJsonObject>

#include "OAIShippingOption.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIShippingOption;

class OAIAnswerShippingQueryRequest : public OAIObject {
public:
    OAIAnswerShippingQueryRequest();
    OAIAnswerShippingQueryRequest(QString json);
    ~OAIAnswerShippingQueryRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getShippingQueryId() const;
    void setShippingQueryId(const QString &shipping_query_id);
    bool is_shipping_query_id_Set() const;
    bool is_shipping_query_id_Valid() const;

    bool isOk() const;
    void setOk(const bool &ok);
    bool is_ok_Set() const;
    bool is_ok_Valid() const;

    QList<OAIShippingOption> getShippingOptions() const;
    void setShippingOptions(const QList<OAIShippingOption> &shipping_options);
    bool is_shipping_options_Set() const;
    bool is_shipping_options_Valid() const;

    QString getErrorMessage() const;
    void setErrorMessage(const QString &error_message);
    bool is_error_message_Set() const;
    bool is_error_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_shipping_query_id;
    bool m_shipping_query_id_isSet;
    bool m_shipping_query_id_isValid;

    bool m_ok;
    bool m_ok_isSet;
    bool m_ok_isValid;

    QList<OAIShippingOption> m_shipping_options;
    bool m_shipping_options_isSet;
    bool m_shipping_options_isValid;

    QString m_error_message;
    bool m_error_message_isSet;
    bool m_error_message_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIAnswerShippingQueryRequest)

#endif // OAIAnswerShippingQueryRequest_H
